try:
    
    a,b,c=7,8,6
    def h(a,b,c=7):
        print(a,b,c,end="")
    
    h(3,4,5)
    print(a,b,c)
    
except: print('error')
