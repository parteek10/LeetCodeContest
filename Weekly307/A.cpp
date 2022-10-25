class Solution {
public:
    int minNumberOfHours(int initialEnergy, int initialExperience, vector<int>& energy, vector<int>& experience) {
            int trainingHours = 0;
        
            int totalEnergy = 0;
        
            for(auto t : energy)
            {
                totalEnergy+=t;
            }
        
            if(totalEnergy>=initialEnergy)
            {
                trainingHours+=totalEnergy-initialEnergy+1;
            }
        
            //cout<<trainingHours<<" ";
            
        
            for(auto e : experience)
            {
                if(e>=initialExperience)
                {
                    int t=(e-initialExperience+1);
                    trainingHours+=t;
                    initialExperience+=t+e;
                }else{
                    initialExperience+=e;
                }
            }
            
            //cout<<trainingHours;
            
            return trainingHours;
        
    }
};