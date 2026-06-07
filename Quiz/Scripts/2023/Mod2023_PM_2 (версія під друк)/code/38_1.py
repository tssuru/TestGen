try:
    a,b,c=8,9,7
    def f(a,b,c):
        print(a,b,c,end=" ")
    
    f(b=2,c=1,4)
    print(a,b,c)
    
except: print('error')
