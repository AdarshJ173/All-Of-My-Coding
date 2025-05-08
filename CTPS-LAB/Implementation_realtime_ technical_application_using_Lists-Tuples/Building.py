print("Materials required for construction of a building")
print("Approximate Price:\n1. Cement: 16%\n2. Sand: 12%\n3. Aggregates: 8%")
print("\n4. Steelbars: 24%\n5. Bricks: 5%\n6. Paints: 4%\n7. Tiles: 8%")
print("\n8. Plumbing items: 5%\n9. Electrical items: 5%")
print("\n10. Wooden products: 10%\n11. Bathroom accessories: 3%")

materials = ("Cement/Bag", "Sand/Cubicfeet", "Aggregates/Cubicfeet", 
             "Steelbars/Kilogram", "Bricks/Piece", "Paints/Litres",
             "Tiles/Squarefeet", "Plumbingitems/meterorpiece", 
             "Electrical items/meterorpiece", "Woodenproducts/squarefeet", 
             "Bathroomaccessories/piece")

price = [410, 50, 25, 57, 7, 375, 55, 500, 500, 1000, 1000]

for i in range(len(materials)):
    print(materials[i], "-", price[i])
print("")

# Uncommenting the line below will result in an error as tuples are immutable
# materials[0] = "Glass items" - tuple is immutable price[0] = 500
for i in range(len(materials)):
    print(materials[i], "-", price[i])
print("")

print("Operations of tuple / list")
print(min(price))
print(max(price))
print(len(price))
print(sum(price))
print(sorted(price))
print(all(price))
print(any(price))
