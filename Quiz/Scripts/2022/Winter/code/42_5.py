try:
    
    a,b,c=8,9,6
    def g(a,b,c):
        print(a,b,c,end="")
    
    g(0,a=0)
    print(a,b,c)
    
except: print('error')
