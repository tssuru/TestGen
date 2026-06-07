try:
    
    a,b,c=6,7,8
    def h(a,b,c):
        print(a,b,c,end="")
    
    h(3,c=2)
    print(a,b,c)
    
except: print('error')
