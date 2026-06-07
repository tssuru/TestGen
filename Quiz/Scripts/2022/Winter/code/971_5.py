try:
    
    a,b,c=8,7,6
    def g(a,b,c):
        print(a,b,c,end="")
    
    g(1,5,b=4)
    print(a,b,c)
    
except: print('error')
