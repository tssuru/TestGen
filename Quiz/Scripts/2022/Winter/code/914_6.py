try:
    a,b,c=0,2,6
    def h(a):
        a=1
        b=5
        c=4
        return a+b+c
    
    a,b,c=9,8,4
    print(h(a),a,b,c)
    
except: print('error')
