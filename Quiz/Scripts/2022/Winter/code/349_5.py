try:
    
    a,b,c=7,6,9
    def g(a,b=8,c):
        print(a,b,c,end="")
    
    g(3,a=4)
    print(a,b,c)
    
except: print('error')
