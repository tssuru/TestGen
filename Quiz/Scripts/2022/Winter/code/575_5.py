try:
    
    a,b,c=9,8,6
    def h(a,b=9,c=7):
        print(a,b,c,end="")
    
    h(3,a=4)
    print(a,b,c)
    
except: print('error')
