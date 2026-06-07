try:
    
    a,b,c=8,7,6
    def g(a,b=9,c):
        print(a,b,c,end="")
    
    g(2,4)
    print(a,b,c)
    
except: print('error')
