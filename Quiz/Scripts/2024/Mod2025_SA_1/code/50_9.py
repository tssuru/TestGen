try:
    a,b,c=9,8,2
    def h(b):
        a=1
        b*=3
        c=4
        return a+b+c
    
    a,b,c=1,4,6
    print(h(a),a,b,c)
except: print('error')
