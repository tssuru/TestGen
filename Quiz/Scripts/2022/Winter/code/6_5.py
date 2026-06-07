try:
    
    a,b,c=6,8,9
    def h(a,b=7,c):
        print(a,b,c,end="")
    
    h(0,c=4,b=2)
    print(a,b,c)
    
except: print('error')
