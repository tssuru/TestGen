try:
    a,b,c=9,7,9
    def g(a,b=8,c=6):
        print(a,b,c,end=" ")
    
    g(a=1,5,a=3)
    print(a,b,c)
    
except: print('error')
