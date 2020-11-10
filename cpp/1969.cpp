
#include <bits/stdc++.h>

using namespace std;

int arr[50][4];

int main(){

	        int n, m;

		        map<char, int> DNA;

			        DNA['T'] = 0;

				        DNA['G'] = 1;

					        DNA['C'] = 2;

						        DNA['A'] = 3;



							        string s;

								        cin>> n>> m;

									        for(int i=0; i<n; i++){

											                cin>> s;

													                for(int j=0; j<m; j++){

																                        arr[j][DNA.find(s[j])->second]++;

																			                }

															        }

										        int hamming_distance = 0;

											        for(int i=0; i<m; i++){

													                int max_ =0;

															                int max_index = 0;

																	                for(int j=0; j<4; j++){

																				                        if(arr[i][j] >=max_){

																								                                max_ = arr[i][j];

																												                                max_index = j;

																																                        }

																							                }

																			                switch(max_index){

																						                        case 0:

																										                                        cout <<"T";

																															                                        break;

																																				                        case 1:

																																				                                        cout <<"G";

																																									                                        break;

																																														                        case 2:

																																														                                        cout <<"C";

																																																			                                        break;

																																																								                        default:

																																																								                                        cout<<"A";

																																																													                                        break;



																																																																		                }

																					                for(int j=0; j<4; j++){

																								                        if(j!=max_index){

																												                                hamming_distance += arr[i][j];

																																                        }

																											                }



																							        }

												        cout <<endl<< hamming_distance<<endl;



}




