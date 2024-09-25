 int sti = par[{2, 2}].first, stj = par[{2, 2}].second;

    while (graph[sti][stj] != 'A')
    {

        graph[sti][stj] = 'X';

        sti = par[{sti, stj}].first;
        stj = par[{sti, stj}].second;
    }