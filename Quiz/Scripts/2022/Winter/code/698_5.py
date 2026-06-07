try:
    
    a,b,c=6,6,8
    def h(a,b=7,c):
        print(a,b,c,end="")
    
    h(3,c=1,b=5)
    print(a,b,c)
    
except: print('error')
