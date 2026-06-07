try:
    a,b,c=7,8,2
    def h(a):
        global c
        a=3
        b-=4
        c=5
        return a+b+c
    
    a,b,c=3,4,6
    print(h(a),a,b,c)
    
except: print('error')
