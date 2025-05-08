// https://www.youtube.com/redirect?event=video_description&redir_token=QUFFLUhqbm9nOFZGMk9CSVI1NEtDOVJMeXIxU2dHekRYUXxBQ3Jtc0tsT1JRcnh0TEgwbHNvSzJHenR2VzduMWgtdG43ajVaYld0bExLZXNLUXk5dGpvWGZJelhxYU1IdDUxZDM3cEpGWFQwR0ZmcTQ1Q2VpSkE0N2hpTnZsSDljRV80VzdhUV9qblVmM2FBZU5qUTM1em1IUQ&q=https%3A%2F%2Fbit.ly%2F32VA96H&v=zg8Y1oE4qYQ

if (nStairs < 0)
{
    return 0;
}

if (nStairs == 0)
{
    return 1;
}

int ans = countDistinctWayToClimbStair(nStairs-1) + coundDistinctWayToClimbStairs(nStairs-2);

return ans;

