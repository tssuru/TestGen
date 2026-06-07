try:
    
    a,b,c=7,8,6
    def h(a,b=7,c):
        print(a,b,c,end="")
    
    h(1,5,2)
    print(a,b,c)
    
except: print('error')
