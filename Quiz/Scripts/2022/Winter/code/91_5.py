try:
    
    a,b,c=8,8,6
    def h(a,b=9,c):
        print(a,b,c,end="")
    
    h(a=2,1,b=3)
    print(a,b,c)
    
except: print('error')
