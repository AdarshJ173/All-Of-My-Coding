# Name: A. Adarsh Jagannath | Student ID: 24WU0102063 | Section: CSE-Rhinos(Core)
# Filename: 24WU0102063_P&S.py
# Subject: Probability and Statistics | Assignment 1

import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
import seaborn as sns
import time, sys
from collections import Counter
from scipy import stats
from colorama import Fore, Style, init, Back
import math
import os

# ──────────────────────────────────────────────────────────────────────────────
# ────────────────────────────── SETUP & UTILITIES ─────────────────────────────
# ──────────────────────────────────────────────────────────────────────────────

# Initialize colorama with autoreset True to avoid color bleeding
init(autoreset=True)
np.random.seed(42)
sns.set_theme(style="whitegrid")

def clear_screen():
    """Clear the terminal screen in a cross-platform way"""
    os.system('cls' if os.name == 'nt' else 'clear')

def animated(text, color=Fore.CYAN, delay=0.005, newline=True):
    """Display text with a typing animation effect"""
    for char in text:
        sys.stdout.write(color + char + Style.RESET_ALL)
        sys.stdout.flush()
        time.sleep(delay)
    if newline:
        print()  # Use print() instead of sys.stdout.write("\n") for consistency

def section(title):
    """Display a section header with consistent formatting"""
    print(Fore.MAGENTA + "\n" + "="*70)
    animated(f"{title.center(70)}", Fore.YELLOW, 0.002)
    print(Fore.MAGENTA + "="*70)  # Removed the extra newline

def loading(msg, dur=1.0):
    """Display a loading bar with progress percentage"""
    animated(msg, Fore.GREEN, 0.02)
    bar_len = 30
    for i in range(bar_len + 1):
        pct = int(100 * i / bar_len)
        bar = "█" * i + " " * (bar_len - i)
        sys.stdout.write(Fore.GREEN + f"\r[{bar}] {pct}%")
        sys.stdout.flush()
        time.sleep(dur / bar_len)
    print()  # Just add a newline instead of two newlines

def splash_screen():
    """Display the animated splash screen"""
    clear_screen()
    
    # Enhanced animated ASCII art with fewer characters to avoid wrapping issues
    art = r"""
╔══════════════════════════════════════════════════════════════╗
║                                                              ║
║  ██████╗ ██████╗  ██████╗ ██████╗  █████╗ ██████╗ ██╗██╗     ██╗████████╗██╗   ██╗    ║
║  ██╔══██╗██╔══██╗██╔═══██╗██╔══██╗██╔══██╗██╔══██╗██║██║     ██║╚══██╔══╝╚██╗ ██╔╝    ║
║  ██████╔╝██████╔╝██║   ██║██████╔╝███████║██████╔╝██║██║     ██║   ██║    ╚████╔╝     ║
║  ██╔═══╝ ██╔══██╗██║   ██║██╔══██╗██╔══██║██╔══██╗██║██║     ██║   ██║     ╚██╔╝      ║
║  ██║     ██║  ██║╚██████╔╝██████╔╝██║  ██║██████╔╝██║███████╗██║   ██║      ██║       ║
║                                                                              ║
║      ███████╗████████╗ █████╗ ████████╗██╗███████╗████████╗██╗ ██████╗███████╗     ║
║      ██╔════╝╚══██╔══╝██╔══██╗╚══██╔══╝██║██╔════╝╚══██╔══╝██║██╔════╝██╔════╝     ║
║      ███████╗   ██║   ███████║   ██║   ██║███████╗   ██║   ██║██║     ███████╗     ║
║      ╚════██║   ██║   ██╔══██║   ██║   ██║╚════██║   ██║   ██║██║     ╚════██║     ║
║      ███████║   ██║   ██║  ██║   ██║   ██║███████║   ██║   ██║╚██████╗███████║     ║
║                                                                              ║
╚══════════════════════════════════════════════════════════════╝
    """
    
    # Rainbow animation for the title - simplified to avoid flickering
    colors = [Fore.RED, Fore.YELLOW, Fore.GREEN, Fore.CYAN, Fore.BLUE, Fore.MAGENTA]
    for i in range(6):  # Reduced animation cycles to prevent flickering
        color = colors[i % len(colors)]
        print(color + art)
        time.sleep(0.2)
        if i < 5:  # Don't clear on the last iteration
            clear_screen()
    
    # Subtitle with typing effect
    subtitle = "🌟 Welcome to the Ultimate Probability & Statistics Experience 🌟"
    animated(subtitle.center(70), Fore.LIGHTGREEN_EX, 0.015)
    
    # Show developer info
    creator_info = "\n❯ Created by: A. Adarsh Jagannath | ID: 24WU0102063 | Section: CSE-Rhinos(Core)"
    animated(creator_info, Fore.LIGHTYELLOW_EX, 0.01)
    
    # Loading animation
    time.sleep(0.5)
    loading("Initializing statistical engines...", 1.5)
    
    print(Fore.CYAN + "─" * 70)
    print(Fore.WHITE + " This program demonstrates statistical concepts through interactive simulations".center(70))
    print(Fore.CYAN + "─" * 70)

def task1_enhanced_stats():
    section("TASK 1 ▶ Enhanced Descriptive Statistics (From First Principles)")
    # Generate sample data with interesting distributions
    np.random.seed(42)
    df = pd.DataFrame({
        "Maths": np.random.randint(50, 100, 100),
        "Physics": np.random.normal(70, 10, 100).round(2),
        "Chemistry": np.random.randint(40, 90, 100)
    })

    # Create colorful ASCII visualizations of the data distributions
    def ascii_histogram(data, bins=10, width=50, title=""):
        max_val, min_val = max(data), min(data)
        bin_size = (max_val - min_val) / bins
        counts = [0] * bins
        
        for value in data:
            bin_idx = min(bins - 1, int((value - min_val) / bin_size))
            counts[bin_idx] += 1
            
        max_count = max(counts)
        scale = width / max_count if max_count > 0 else 1
        
        hist_str = f"\n{Fore.YELLOW}{title.center(width+20)}\n"
        for i, count in enumerate(counts):
            bin_start = min_val + i * bin_size
            bar_len = int(count * scale)
            bar_color = [Fore.RED, Fore.YELLOW, Fore.GREEN, Fore.CYAN, Fore.BLUE, Fore.MAGENTA][i % 6]
            hist_str += f"{Fore.WHITE}{bin_start:6.2f} | {bar_color}{'█' * bar_len} {Fore.WHITE}{count}\n"
        
        return hist_str
    
    # Manual implementation of statistical functions
    def manual_mean(data):
        """Calculate mean manually"""
        return sum(data) / len(data)
    
    def manual_median(data):
        """Calculate median manually"""
        sorted_data = sorted(data)
        n = len(sorted_data)
        mid = n // 2
        if n % 2 == 0:
            return (sorted_data[mid-1] + sorted_data[mid]) / 2
        else:
            return sorted_data[mid]
    
    def manual_mode(data):
        """Calculate mode manually"""
        counter = {}
        for val in data:
            if val in counter:
                counter[val] += 1
            else:
                counter[val] = 1
        
        max_count = 0
        mode_val = None
        for val, count in counter.items():
            if count > max_count:
                max_count = count
                mode_val = val
        return mode_val
    
    def manual_variance(data, mean=None):
        """Calculate variance manually"""
        if mean is None:
            mean = manual_mean(data)
        return sum((x - mean) ** 2 for x in data) / len(data)
    
    def manual_std_dev(data, mean=None):
        """Calculate standard deviation manually"""
        return math.sqrt(manual_variance(data, mean))
    
    def manual_percentile(data, p):
        """Calculate percentile manually"""
        sorted_data = sorted(data)
        n = len(sorted_data)
        idx = (n - 1) * p
        idx_floor = math.floor(idx)
        idx_ceil = math.ceil(idx)
        
        if idx_floor == idx_ceil:
            return sorted_data[int(idx)]
        
        return sorted_data[idx_floor] * (idx_ceil - idx) + sorted_data[idx_ceil] * (idx - idx_floor)
    
    def manual_skewness(data, mean=None, std_dev=None):
        """Calculate skewness manually using the formula: Σ((x-μ)³)/(n*σ³)"""
        if mean is None:
            mean = manual_mean(data)
        if std_dev is None:
            std_dev = manual_std_dev(data, mean)
        
        n = len(data)
        if std_dev == 0:
            return 0
        
        return sum(((x - mean) / std_dev) ** 3 for x in data) / n
    
    def manual_kurtosis(data, mean=None, std_dev=None):
        """Calculate kurtosis manually using the formula: [Σ((x-μ)⁴)/(n*σ⁴)] - 3"""
        if mean is None:
            mean = manual_mean(data)
        if std_dev is None:
            std_dev = manual_std_dev(data, mean)
        
        n = len(data)
        if std_dev == 0:
            return 0
        
        return sum(((x - mean) / std_dev) ** 4 for x in data) / n - 3
    
    def manual_quartile_deviation(data):
        """Calculate quartile deviation manually: (Q3-Q1)/2"""
        q1 = manual_percentile(data, 0.25)
        q3 = manual_percentile(data, 0.75)
        return (q3 - q1) / 2
    
    def newdescribe(df):
        """Enhanced describe function using manual calculations"""
        stats_df = pd.DataFrame()
        
        for col in df.columns:
            s = df[col].dropna().tolist()
            
            # Calculate all stats manually
            mean_val = manual_mean(s)
            median_val = manual_median(s)
            mode_val = manual_mode(s)
            std_dev = manual_std_dev(s, mean_val)
            
            # Calculate percentiles
            q1 = manual_percentile(s, 0.25)
            q3 = manual_percentile(s, 0.75)
            p30 = manual_percentile(s, 0.30)
            
            # Calculate advanced stats
            rng = max(s) - min(s)
            qd = manual_quartile_deviation(s)
            skew = manual_skewness(s, mean_val, std_dev)
            kurt = manual_kurtosis(s, mean_val, std_dev)
            
            stats_df[col] = pd.Series({
                "Count": len(s),
                "Mean": round(mean_val, 2),
                "Median": round(median_val, 2),
                "Mode": mode_val,
                "Range": round(rng, 2),
                "Std Dev": round(std_dev, 2),
                "25%": round(q1, 2),
                "30%": round(p30, 2),
                "75%": round(q3, 2),
                "Q.D.": round(qd, 2),
                "Beta1 (Skewness)": round(skew, 2),
                "Beta2 (Kurtosis)": round(kurt, 2)
            })
        
        return stats_df

    # Create beautiful ASCII progress animation
    loading("Calculating statistics from first principles...", 2.0)
    
    # Display ASCII visualizations first
    for col in df.columns:
        print(ascii_histogram(df[col].values, bins=10, width=40, title=f"Distribution of {col} Scores"))
        time.sleep(0.5)
    
    # Calculate and show statistics
    animated("⭐ Here's your comprehensive statistical analysis (all calculated from scratch): ⭐\n", Fore.LIGHTBLUE_EX)
    stats_table = newdescribe(df)
    
    # Pretty print the stats table with colors
    headers = list(stats_table.index)
    subjects = list(stats_table.columns)
    
    # Maximum width for each column
    max_header_width = max(len(str(h)) for h in headers) + 2
    max_val_width = 8  # Fixed width for values
    
    # Print header row
    print(Fore.CYAN + " " * max_header_width + "│", end="")
    for subj in subjects:
        print(Fore.CYAN + f" {subj.center(max_val_width)} │", end="")
    print("\n" + "─" * max_header_width + "┼" + "─" * ((max_val_width + 3) * len(subjects) - 1))
    
    # Print rows
    colors = [Fore.GREEN, Fore.YELLOW, Fore.RED, Fore.MAGENTA, Fore.BLUE, Fore.CYAN]
    for i, stat in enumerate(headers):
        color = colors[i % len(colors)]
        print(color + f" {stat.ljust(max_header_width-1)}│", end="")
        for subj in subjects:
            val = stats_table.loc[stat, subj]
            val_str = f"{val:.2f}" if isinstance(val, float) else str(val)
            print(color + f" {val_str.center(max_val_width)} │", end="")
        print()
    
    print("\n" + Fore.GREEN + "Note: All statistics calculated manually using statistical formulas! No built-in functions were used.\n")

def task2_coin_toss():
    section("TASK 2 ▶ Coin Toss Simulation (1000 flips)")
    flips = 1000
    
    # Create an animated coin toss effect
    animated("Preparing coin toss simulation...", Fore.YELLOW)
    
    # Coin animation frames - simplified to just 2 frames
    coin_frames = [
        r"""
          _______
         /   H   \
        |         |
        |    O    |
        |         |
         \_______/
        """,
        r"""
          _______
         /   T   \
        |         |
        |    O    |
        |         |
         \_______/
        """
    ]
    
    # Show a brief coin animation with proper screen clearing
    for _ in range(2):
        for frame in coin_frames:
            print(Fore.YELLOW + frame)
            time.sleep(0.3)
            # Use a fixed number of backspaces to clear the frame
            print("\033[6A\033[K\033[K\033[K\033[K\033[K\033[K")
    
    loading(f"Simulating {flips} coin tosses...", 1.5)
    
    # Perform the actual simulation
    results = np.random.choice(["Heads", "Tails"], flips)
    heads = np.count_nonzero(results == "Heads")
    tails = flips - heads
    
    # Create fancy ASCII display of results
    heads_pct = (heads / flips) * 100
    tails_pct = (tails / flips) * 100
    
    # Coin results header
    print(Fore.CYAN + "\n" + "─" * 50)
    animated("📊 COIN TOSS RESULTS 📊".center(50), Fore.YELLOW)
    print(Fore.CYAN + "─" * 50 + "\n")
    
    # Display total flips
    animated(f"Total Flips: {Fore.WHITE}{flips}", Fore.YELLOW)
    
    # Display heads/tails counts with ASCII bar graph
    max_bar = 30
    heads_bar = int((heads / flips) * max_bar)
    tails_bar = int((tails / flips) * max_bar)
    
    print(f"\n{Fore.CYAN}Heads: {Fore.WHITE}{heads} {Fore.YELLOW}({heads_pct:.2f}%)")
    print(Fore.CYAN + f"[{Fore.GREEN}{'█' * heads_bar}{' ' * (max_bar - heads_bar)}{Fore.CYAN}]")
    
    print(f"\n{Fore.CYAN}Tails: {Fore.WHITE}{tails} {Fore.YELLOW}({tails_pct:.2f}%)")
    print(Fore.CYAN + f"[{Fore.RED}{'█' * tails_bar}{' ' * (max_bar - tails_bar)}{Fore.CYAN}]")
    
    # Calculate run sequences (consecutive heads or tails)
    runs = []
    current_run = 1
    for i in range(1, len(results)):
        if results[i] == results[i-1]:
            current_run += 1
        else:
            runs.append((results[i-1], current_run))
            current_run = 1
    runs.append((results[-1], current_run))
    
    # Display interesting run statistics
    longest_heads_run = max([run[1] for run in runs if run[0] == "Heads"], default=0)
    longest_tails_run = max([run[1] for run in runs if run[0] == "Tails"], default=0)
    
    print(f"\n{Fore.YELLOW}Longest Streak of Heads: {Fore.WHITE}{longest_heads_run}")
    print(f"{Fore.YELLOW}Longest Streak of Tails: {Fore.WHITE}{longest_tails_run}")
    
    # Calculate and display if the simulation matches expected probability
    expected = flips / 2
    chi_squared = ((heads - expected)**2 + (tails - expected)**2) / expected
    p_value = 1 - stats.chi2.cdf(chi_squared, df=1)
    
    fairness = "PERFECTLY FAIR" if p_value > 0.95 else "FAIR" if p_value > 0.05 else "POSSIBLY BIASED"
    fairness_color = Fore.GREEN if p_value > 0.05 else Fore.RED
    
    print(f"\n{Fore.YELLOW}Coin Fairness Assessment: {fairness_color}{fairness}")
    print(f"{Fore.CYAN}(χ² = {chi_squared:.4f}, p-value = {p_value:.4f})")
    
    # relative frequency over time with improved visualization
    h_count = t_count = 0
    h_freq, t_freq = [], []
    t_points = [25, 50, 100, 200, 300, 500, 750, 1000]  # Key points to visualize
    
    for i, res in enumerate(results, 1):
        h_count += (res == "Heads")
        t_count += (res == "Tails")
        if i in t_points or i == flips:
            h_freq.append((i, h_count / i))
            t_freq.append((i, t_count / i))
    
    # Display convergence to 0.5 in ASCII art
    print(f"\n{Fore.YELLOW}Convergence to Expected Probability (0.5):\n")
    for point, (h_x, h_y), (t_x, t_y) in zip(t_points, h_freq, t_freq):
        diff_h = abs(h_y - 0.5)
        diff_t = abs(t_y - 0.5)
        
        # Create scaled bars showing how close to 0.5 we are
        h_bar_len = int(20 * (1 - min(diff_h * 10, 1)))
        t_bar_len = int(20 * (1 - min(diff_t * 10, 1)))
        
        h_color = Fore.GREEN if diff_h < 0.05 else Fore.YELLOW if diff_h < 0.1 else Fore.RED
        t_color = Fore.GREEN if diff_t < 0.05 else Fore.YELLOW if diff_t < 0.1 else Fore.RED
        
        print(f"{Fore.CYAN}After {point:4} flips:")
        print(f"  Heads: {h_y:.4f} {h_color}{'█' * h_bar_len}{' ' * (20-h_bar_len)}{Fore.CYAN} Δ = {diff_h:.4f}")
        print(f"  Tails: {t_y:.4f} {t_color}{'█' * t_bar_len}{' ' * (20-t_bar_len)}{Fore.CYAN} Δ = {diff_t:.4f}")
        print()
    
    # Plot the traditional matplotlib graph too
    animated("Generating probability convergence plot...", Fore.GREEN)
    
    h_count = t_count = 0
    x_vals = range(1, flips + 1)
    h_freq, t_freq = [], []
    
    for i, res in enumerate(results, 1):
        h_count += (res == "Heads")
        t_count += (res == "Tails")
        h_freq.append(h_count / i)
        t_freq.append(t_count / i)
    
    plt.figure(figsize=(10, 6))
    plt.plot(x_vals, h_freq, label="Heads", linewidth=2, color='green')
    plt.plot(x_vals, t_freq, label="Tails", linewidth=2, color='red')
    plt.axhline(y=0.5, color='blue', linestyle='--', alpha=0.7, label="Expected (0.5)")
    
    # Highlight key points
    for point in t_points:
        plt.scatter(point, h_freq[point-1], color='darkgreen', s=50, zorder=5)
        plt.scatter(point, t_freq[point-1], color='darkred', s=50, zorder=5)
    
    plt.title("Convergence of Relative Frequencies in Coin Tosses", fontsize=14)
    plt.xlabel("Number of Tosses", fontsize=12)
    plt.ylabel("Relative Frequency", fontsize=12)
    plt.grid(True, alpha=0.3)
    plt.legend(fontsize=10)
    
    # Add annotations to show convergence
    plt.annotate(f"Final: H={h_freq[-1]:.4f}, T={t_freq[-1]:.4f}", 
                 xy=(flips, h_freq[-1]), xytext=(flips-200, h_freq[-1]+0.05),
                 arrowprops=dict(arrowstyle="->", connectionstyle="arc3"))
    
    plt.tight_layout()
    plt.show()

def task3_dice_roll():
    section("TASK 3 ▶ Two‑Dice Roll Simulation (1000 rolls)")
    rolls = 1000
    
    # ASCII dice patterns
    dice_patterns = {
        1: [
            "┌─────────┐",
            "│         │",
            "│    ●    │",
            "│         │",
            "└─────────┘"
        ],
        2: [
            "┌─────────┐",
            "│  ●      │",
            "│         │",
            "│      ●  │",
            "└─────────┘"
        ],
        3: [
            "┌─────────┐",
            "│  ●      │",
            "│    ●    │",
            "│      ●  │",
            "└─────────┘"
        ],
        4: [
            "┌─────────┐",
            "│  ●   ●  │",
            "│         │",
            "│  ●   ●  │",
            "└─────────┘"
        ],
        5: [
            "┌─────────┐",
            "│  ●   ●  │",
            "│    ●    │",
            "│  ●   ●  │",
            "└─────────┘"
        ],
        6: [
            "┌─────────┐",
            "│  ●   ●  │",
            "│  ●   ●  │",
            "│  ●   ●  │",
            "└─────────┘"
        ]
    }

    # Animate dice rolling with cleaner animation
    animated("Preparing dice simulation...", Fore.MAGENTA)
    
    # Instead of complex animation, show just a few combinations
    dice_combinations = [(1, 6), (2, 5), (3, 4), (4, 3), (5, 2), (6, 1)]
    
    for i, j in dice_combinations:
        # Print dice side by side
        dice1 = dice_patterns[i]
        dice2 = dice_patterns[j]
        
        for k in range(5):
            print(Fore.CYAN + dice1[k] + "   " + Fore.YELLOW + dice2[k])
        
        print(f"Sum: {i+j}")
        time.sleep(0.5)
        
        # Clear lines for next animation frame
        print("\033[6A\033[K\033[K\033[K\033[K\033[K\033[K")
    
    loading(f"Simulating {rolls} dice rolls...", 1.5)
    
    # Perform simulation
    d1 = np.random.randint(1, 7, rolls)
    d2 = np.random.randint(1, 7, rolls)
    sums = d1 + d2
    
    # Count frequencies and calculate theoretical probabilities
    freq = Counter(sums)
    freq_sorted = sorted(freq.items())
    
    # Calculate theoretical probabilities
    theoretical_probs = {
        2: 1/36, 3: 2/36, 4: 3/36, 5: 4/36, 6: 5/36, 7: 6/36,
        8: 5/36, 9: 4/36, 10: 3/36, 11: 2/36, 12: 1/36
    }
    
    # Pretty print header
    print(Fore.CYAN + "\n" + "─" * 60)
    animated("🎲 TWO DICE ROLL RESULTS 🎲".center(60), Fore.YELLOW)
    print(Fore.CYAN + "─" * 60 + "\n")
    
    # Create a beautiful ASCII table for results
    table_header = f"{Fore.YELLOW}{'Sum':^5}│{Fore.YELLOW}{'Count':^8}│{Fore.YELLOW}{'Observed %':^12}│{Fore.YELLOW}{'Theoretical %':^14}│{Fore.YELLOW}{'Diff':^8}"
    print(table_header)
    print(Fore.CYAN + "─" * 5 + "┼" + "─" * 8 + "┼" + "─" * 12 + "┼" + "─" * 14 + "┼" + "─" * 8)
    
    chi_squared = 0
    
    for total in range(2, 13):
        count = freq.get(total, 0)
        observed_prob = count / rolls
        theo_prob = theoretical_probs[total]
        diff = observed_prob - theo_prob
        diff_pct = diff * 100
        
        # Calculate chi-squared component
        expected_count = rolls * theo_prob
        chi_squared += ((count - expected_count) ** 2) / expected_count
        
        # Color based on how close observed is to theoretical
        diff_color = Fore.GREEN if abs(diff_pct) < 1 else Fore.YELLOW if abs(diff_pct) < 2 else Fore.RED
        
        print(f"{Fore.CYAN}{total:^5}│{Fore.WHITE}{count:^8}│{Fore.WHITE}{observed_prob*100:^12.2f}│{Fore.WHITE}{theo_prob*100:^14.2f}│{diff_color}{diff_pct:^+8.2f}")
    
    print(Fore.CYAN + "─" * 5 + "┴" + "─" * 8 + "┴" + "─" * 12 + "┴" + "─" * 14 + "┴" + "─" * 8)
    
    # Show chi-squared goodness of fit test result
    df = 10  # degrees of freedom = (num categories - 1)
    p_value = 1 - stats.chi2.cdf(chi_squared, df)
    fit_quality = "EXCELLENT" if p_value > 0.9 else "GOOD" if p_value > 0.1 else "FAIR" if p_value > 0.05 else "POOR"
    fit_color = Fore.GREEN if p_value > 0.1 else Fore.YELLOW if p_value > 0.05 else Fore.RED
    
    print(f"\n{Fore.YELLOW}Goodness of Fit: {fit_color}{fit_quality}")
    print(f"{Fore.CYAN}(χ² = {chi_squared:.4f}, p-value = {p_value:.4f}, degrees of freedom = {df})")
    
    # Create a visualization showing all possible dice combinations
    animated("\nGenerating heatmap of all possible dice combinations...", Fore.GREEN)
    
    # Create combination count matrix
    combo_matrix = np.zeros((6, 6), dtype=int)
    for i in range(rolls):
        combo_matrix[d1[i]-1, d2[i]-1] += 1
    
    # Create a visual representation of the combination frequencies
    print(f"\n{Fore.YELLOW}Dice Combination Frequency Heatmap:")
    print(f"{Fore.CYAN}  │  1   2   3   4   5   6  ")
    print(f"{Fore.CYAN}──┼─────────────────────────")
    
    # Define a function to get color intensity based on count
    def get_color_intensity(val, max_val):
        intensity = int(255 * (val / max_val))
        return f"\033[38;2;{255-intensity};{intensity};0m"
    
    max_combo = np.max(combo_matrix)
    
    for i in range(6):
        print(f"{Fore.CYAN}{i+1} │", end=" ")
        for j in range(6):
            count = combo_matrix[i, j]
            color = get_color_intensity(count, max_combo)
            print(f"{color}{count:3}{Fore.RESET}", end=" ")
        print(f"  {Fore.YELLOW}← Dice 1 = {i+1}")
    
    print(f"{Fore.CYAN}  ↑")
    print(f"{Fore.CYAN}  Dice 2 values")
    
    # Create traditional visualization
    animated("\nGenerating probability distribution plot...", Fore.GREEN)
    
    prob_df = pd.DataFrame(
        {"Sum": [k for k, v in freq_sorted], 
         "Observed": [v / rolls for k, v in freq_sorted],
         "Theoretical": [theoretical_probs[k] for k, v in freq_sorted]}
    )
    
    # Set up the plot
    fig, ax = plt.subplots(figsize=(12, 8))
    bar_width = 0.35
    index = np.arange(len(freq_sorted))
    
    # Plot observed frequencies
    obs_bars = ax.bar(index, prob_df["Observed"], bar_width, 
                    label='Observed', color='skyblue', edgecolor='navy')
    
    # Plot theoretical probabilities
    theo_bars = ax.bar(index + bar_width, prob_df["Theoretical"], bar_width,
                     label='Theoretical', color='lightgreen', edgecolor='darkgreen', alpha=0.8)
    
    # Add vertical lines as grid for better readability
    for i in index:
        ax.axvline(x=i+bar_width/2, ymin=0, ymax=0.92, color='gray', linestyle='--', alpha=0.3)
    
    # Add data labels
    for bar in obs_bars:
        height = bar.get_height()
        ax.text(bar.get_x() + bar.get_width()/2., height + 0.005,
                f'{height:.3f}', ha='center', va='bottom', rotation=0, fontsize=9)
                
    for bar in theo_bars:
        height = bar.get_height()
        ax.text(bar.get_x() + bar.get_width()/2., height + 0.005,
                f'{height:.3f}', ha='center', va='bottom', rotation=0, fontsize=9)
    
    # Customize the plot
    ax.set_title('Probability Distribution of Sum of Two Dice\nObserved vs Theoretical', fontsize=15)
    ax.set_xlabel('Sum of Dice', fontsize=12)
    ax.set_ylabel('Probability', fontsize=12)
    ax.set_xticks(index + bar_width / 2)
    ax.set_xticklabels(prob_df["Sum"])
    ax.legend(fontsize=10)
    ax.grid(axis='y', linestyle='--', alpha=0.7)

    # Add annotation about chi-squared test
    ax.annotate(f'Goodness of fit: {fit_quality}\nχ² = {chi_squared:.2f}, p = {p_value:.4f}',
                xy=(0.02, 0.96), xycoords='axes fraction',
                bbox=dict(boxstyle="round,pad=0.5", fc="white", ec="gray", alpha=0.8),
                fontsize=10)
    
    plt.tight_layout()
    plt.show()
    
    # 3D visualization of dice probabilities
    animated("\nGenerating 3D visualization of dice probabilities...", Fore.MAGENTA)
    
    fig = plt.figure(figsize=(10, 8))
    ax = fig.add_subplot(111, projection='3d')
    
    # Prepare the 3D grid
    x, y = np.meshgrid(range(1, 7), range(1, 7))
    dx = dy = 0.8
    dz = combo_matrix.flatten() / rolls
    
    # Normalize colors
    colors = plt.cm.viridis(dz / np.max(dz))
    
    # Plot 3D bars
    ax.bar3d(x.flatten()-dx/2, y.flatten()-dy/2, np.zeros_like(dz), 
             dx, dy, dz, color=colors, shade=True)
    
    # Add labels for each bar
    for i in range(6):
        for j in range(6):
            ax.text(i+1, j+1, combo_matrix[i,j]/rolls + 0.01, 
                    f"{combo_matrix[i,j]/rolls:.3f}", 
                    horizontalalignment='center',
                    verticalalignment='bottom',
                    fontsize=8)
    
    # Add Dice Sum overlay
    for i in range(6):
        for j in range(6):
            sum_val = i + j + 2
            ax.text(i+1, j+1, -0.04, 
                    f"Sum: {sum_val}", 
                    horizontalalignment='center',
                    color='red',
                    fontsize=7)
    
    ax.set_xlabel('Dice 1')
    ax.set_ylabel('Dice 2')
    ax.set_zlabel('Probability')
    ax.set_title('3D Probability Distribution of Dice Combinations')
    
    # Set the tick positions
    ax.set_xticks(range(1, 7))
    ax.set_yticks(range(1, 7))
    
    plt.tight_layout()
    plt.show()

# ──────────────────────────────────────────────────────────────────────────────
# ────────────────────────────────────────── MAIN MENU & LOOP ──────────────────────────────────────────────────────────────────────────────

def main_menu():
    """Display the main menu and handle user choices"""
    splash_screen()
    
    menu_options = [
        ("Enhanced Descriptive Statistics (From First Principles)", "Calculate statistical measures using manual formulas"),
        ("Coin Toss Simulation", "Explore probability through 1000 coin flips with advanced analysis"),
        ("Dice Roll Simulation", "Investigate two-dice probability distributions with 3D visualization"),
        ("Run ALL tasks in sequence", "Experience the complete statistical journey"),
        ("Exit", "Quit the program")
    ]
    
    while True:
        # Display fancy menu with consistent width
        width = 70  # Reduced width to avoid terminal wrapping issues
        print(Fore.CYAN + "\n╔" + "═" * width + "╗")
        print(Fore.CYAN + "║" + Fore.YELLOW + "MAIN MENU".center(width) + Fore.CYAN + "║")
        print(Fore.CYAN + "╠" + "═" * width + "╣")
        
        for i, (option, desc) in enumerate(menu_options):
            option_num = i + 1 if i < 4 else 0
            # Ensure that text doesn't exceed the width
            option_text = option[:46] + "..." if len(option) > 46 else option
            print(Fore.CYAN + "║ " + Fore.GREEN + f"[{option_num}]" + Fore.WHITE + f" {option_text:<46}" + Fore.CYAN + " ║")
            
            # Wrap description if needed to prevent overflow
            desc_text = desc[:66] + "..." if len(desc) > 66 else desc
            print(Fore.CYAN + "║   " + Fore.LIGHTBLACK_EX + f"{desc_text:<{width-6}}" + Fore.CYAN + " ║")
            
            if i < len(menu_options) - 1:
                print(Fore.CYAN + "║" + " " * width + "║")
        
        print(Fore.CYAN + "╚" + "═" * width + "╝")
        
        # Get user input with simple prompt (removed blinking cursor to avoid issues)
        print(Fore.YELLOW + "Select an option: ", end="")
        sys.stdout.flush()
        
        choice = input().strip()
        
        # Clear screen for next action
        clear_screen()
        
        if choice == "1":
            task1_enhanced_stats()
        elif choice == "2":
            task2_coin_toss()
        elif choice == "3":
            task3_dice_roll()
        elif choice == "4":
            task1_enhanced_stats()
            task2_coin_toss()
            task3_dice_roll()
        elif choice == "0":
            # Simplified exit animation to avoid glitches
            thank_you_msg = "Thank you for exploring the world of statistics! 🎉"
            goodbye_msg = "Exiting... Have a wonderful day! 📊"
            
            print(Fore.MAGENTA + thank_you_msg)
            time.sleep(0.5)
            print(Fore.CYAN + goodbye_msg)
            time.sleep(0.5)
            
            # Simple farewell message instead of complex animation
            print(Fore.YELLOW + "\n" + "*" * 30)
            print(Fore.GREEN + "PROGRAM TERMINATED".center(30))
            print(Fore.YELLOW + "*" * 30 + "\n")
            break
        else:
            print(Fore.RED + "Invalid choice! Please enter 0–4.")

if __name__ == "__main__":
    # Import threading here to avoid potential issues
    import threading
    main_menu()
