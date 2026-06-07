try:
    
    a,b,c=8,6,7
    def g(a,b,c):
        print(a,b,c,end="")
    
    g(4,a=4)
    print(a,b,c)
    
except: print('error')
