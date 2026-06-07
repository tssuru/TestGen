try:
    
    a,b,c=9,7,6
    def g(a,b,c):
        print(a,b,c,end="")
    
    g(5,b=1)
    print(a,b,c)
    
except: print('error')
