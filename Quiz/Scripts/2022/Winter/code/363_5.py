try:
    
    a,b,c=8,9,7
    def g(a,b=7,c):
        print(a,b,c,end="")
    
    g(5,1,2)
    print(a,b,c)
    
except: print('error')
