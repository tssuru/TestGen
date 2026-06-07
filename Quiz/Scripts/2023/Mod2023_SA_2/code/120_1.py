try:
    a,b,c=9,8,7
    def h(a,b,c=6):
        print(a,b,c,end=" ")
    
    h(b=4,c=3,4)
    print(a,b,c)
    
except: print('error')
