try:
    
    a,b,c=8,7,6
    def g(a,b=9,c):
        print(a,b,c,end="")
    
    g(a=2,5,a=3)
    print(a,b,c)
    
except: print('error')
