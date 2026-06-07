try:
    
    a,b,c=9,6,8
    def h(a,b,c):
        print(a,b,c,end="")
    
    h(1,c=1,b=3)
    print(a,b,c)
    
except: print('error')
