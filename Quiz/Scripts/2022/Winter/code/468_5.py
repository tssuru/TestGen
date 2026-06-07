try:
    
    a,b,c=7,8,6
    def h(a,b=9,c):
        print(a,b,c,end="")
    
    h(a=1,5,b=2)
    print(a,b,c)
    
except: print('error')
