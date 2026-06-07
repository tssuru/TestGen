try:
    
    a,b,c=9,8,7
    def h(a,b=6,c=8):
        print(a,b,c,end="")
    
    h(c=4,b=5,c=1)
    print(a,b,c)
    
except: print('error')
