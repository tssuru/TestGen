try:
    
    a,b,c=6,7,8
    def h(a,b=9,c):
        print(a,b,c,end="")
    
    h(0,b=4)
    print(a,b,c)
    
except: print('error')
