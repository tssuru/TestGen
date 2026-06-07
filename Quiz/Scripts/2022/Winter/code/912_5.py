try:
    
    a,b,c=6,9,7
    def g(a,b=8,c):
        print(a,b,c,end="")
    
    g(a=1,b=0,c=4)
    print(a,b,c)
    
except: print('error')
