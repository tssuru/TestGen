try:
    
    a,b,c=9,8,6
    def h(a,b=7,c):
        print(a,b,c,end="")
    
    h(b=1,c=5,2)
    print(a,b,c)
    
except: print('error')
