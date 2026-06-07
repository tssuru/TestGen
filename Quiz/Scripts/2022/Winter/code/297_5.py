try:
    
    a,b,c=7,9,6
    def g(a,b=8,c):
        print(a,b,c,end="")
    
    g(b=4,c=5,0)
    print(a,b,c)
    
except: print('error')
