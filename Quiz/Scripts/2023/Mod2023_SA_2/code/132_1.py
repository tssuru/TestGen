try:
    a,b,c=8,6,7
    def f(a,b=9,c):
        print(a,b,c,end=" ")
    
    f(5,4,c=3)
    print(a,b,c)
    
except: print('error')
