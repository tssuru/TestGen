try:
    
    a,b,c=9,8,6
    def h(a,b=7,c):
        print(a,b,c,end="")
    
    h(3,4,b=5)
    print(a,b,c)
    
except: print('error')
