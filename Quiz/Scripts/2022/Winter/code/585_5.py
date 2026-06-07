try:
    
    a,b,c=8,9,6
    def g(a,b=7,c):
        print(a,b,c,end="")
    
    g(b=3,a=4,c=4)
    print(a,b,c)
    
except: print('error')
