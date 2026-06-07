try:
    
    a,b,c=7,8,6
    def h(a,b=9,c):
        print(a,b,c,end="")
    
    h(a=2,c=3,b=5)
    print(a,b,c)
    
except: print('error')
