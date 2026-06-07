try:
    
    a,b,c=8,7,9
    def g(a,b=6,c=9):
        print(a,b,c,end="")
    
    g(5,a=0)
    print(a,b,c)
    
except: print('error')
