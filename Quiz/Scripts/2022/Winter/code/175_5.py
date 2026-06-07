try:
    
    a,b,c=6,8,7
    def h(a,b,c):
        print(a,b,c,end="")
    
    h(2,c=1,b=2)
    print(a,b,c)
    
except: print('error')
