try:
    
    a,b,c=8,9,6
    def g(a,b=8,c=7):
        print(a,b,c,end="")
    
    g(2,3,1)
    print(a,b,c)
    
except: print('error')
