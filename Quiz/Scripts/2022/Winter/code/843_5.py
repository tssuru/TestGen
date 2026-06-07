try:
    
    a,b,c=8,6,7
    def g(a,b,c=9):
        print(a,b,c,end="")
    
    g(2,3,a=0)
    print(a,b,c)
    
except: print('error')
