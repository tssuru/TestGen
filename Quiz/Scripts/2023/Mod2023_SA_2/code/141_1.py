try:
    a,b,c=7,8,6
    def g(a,b=9,c):
        print(a,b,c,end=" ")
    
    g(3,5,2)
    print(a,b,c)
    
except: print('error')
