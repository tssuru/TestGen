try:
    
    a,b,c=8,7,6
    def g(a,b,c=9):
        print(a,b,c,end="")
    
    g(b=1,c=2,a=0)
    print(a,b,c)
    
except: print('error')
