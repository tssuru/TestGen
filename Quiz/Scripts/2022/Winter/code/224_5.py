try:
    
    a,b,c=9,9,8
    def h(a,b=6,c=7):
        print(a,b,c,end="")
    
    h(3,4,b=5)
    print(a,b,c)
    
except: print('error')
