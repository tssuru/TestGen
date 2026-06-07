try:
    a,b,c=9,7,6
    def g(a,b=8,c=7):
        print(a,b,c,end=" ")
    
    g(b=3,c=4,a=0)
    print(a,b,c)
    
except: print('error')
