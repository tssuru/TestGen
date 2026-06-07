try:
    a,b,c=9,7,6
    def g(a,b=8,c):
        print(a,b,c,end=" ")
    
    g(a=3,0,b=5)
    print(a,b,c)
    
except: print('error')
