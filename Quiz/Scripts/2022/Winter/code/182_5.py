try:
    
    a,b,c=9,6,7
    def g(a,b=8,c):
        print(a,b,c,end="")
    
    g(2,3,5)
    print(a,b,c)
    
except: print('error')
