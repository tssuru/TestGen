try:
    
    a,b,c=7,8,9
    def h(a,b=6,c):
        print(a,b,c,end="")
    
    h(c=4,a=1,c=5)
    print(a,b,c)
    
except: print('error')
