try:
    
    a,b,c=9,8,7
    def h(a,b,c):
        print(a,b,c,end="")
    
    h(0,c=5,b=2)
    print(a,b,c)
    
except: print('error')
