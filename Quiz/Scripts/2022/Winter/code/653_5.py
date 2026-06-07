try:
    
    a,b,c=7,9,6
    def g(a,b=8,c):
        print(a,b,c,end="")
    
    g(1,1,a=2)
    print(a,b,c)
    
except: print('error')
