try:
    
    a,b,c=9,7,8
    def h(a,b=6,c):
        print(a,b,c,end="")
    
    h(1,4)
    print(a,b,c)
    
except: print('error')
