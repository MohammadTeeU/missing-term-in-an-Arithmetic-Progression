static long findMissing(std::vector<long> list)
{

long d=((int) list[list.size()-1] - list[0])/((int)list.size());
	while(list.size()>1)
	{
		if(list.at(0)+d != list.at(1))
		{
			return list.at(0)+d;
		}
		list.erase(list.begin());
	}

}
