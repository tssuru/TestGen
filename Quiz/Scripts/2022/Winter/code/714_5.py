try:
    
    a,b,c=7,8,6
    def h(a,b=9,c):
        print(a,b,c,end="")
    
    h(b=4,c=4,1)
    print(a,b,c)
    
except: print('error')
