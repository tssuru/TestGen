try:
    
    a,b,c=9,6,9
    def g(a,b=8,c=7):
        print(a,b,c,end="")
    
    g(5,2,0)
    print(a,b,c)
    
except: print('error')
