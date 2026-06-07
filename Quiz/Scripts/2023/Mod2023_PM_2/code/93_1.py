try:
    a,b,c=8,6,7
    def g(a,b=9,c):
        print(a,b,c,end=" ")
    
    g(a=4,0,c=3)
    print(a,b,c)
    
except: print('error')
