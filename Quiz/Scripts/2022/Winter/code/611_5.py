try:
    
    a,b,c=9,8,6
    def h(a,b,c=7):
        print(a,b,c,end="")
    
    h(b=2,c=4,a=5)
    print(a,b,c)
    
except: print('error')
